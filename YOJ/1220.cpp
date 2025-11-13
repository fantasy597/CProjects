    #include<iostream>
    #include<iomanip>
    using namespace std;
    struct info
    {
        int sno;
        
        int score[15];
        float gpa;
        int rank;
        float realgpa;
    };
    float Calpoints(int stan[15],int m,int score[15])
    {   
        float points = 0.0;
        for(int i = 0;i < m;i++)
        {
            if(score[i] >= 90)
            {
                points += 4.0 * stan[i];
                continue;
            }
            if(score[i] >= 86 && score[i] <= 89)
            {
                points += 3.7 * stan[i];
                continue;
            }
            if(score[i] >= 83 && score[i] <= 85)
            {
                points += 3.3 * stan[i];
                continue;
            }
            if(score[i] >= 80 && score[i] <= 82)
            {
                points += 3.0 * stan[i];
                continue;
            }
            if(score[i] >= 76 && score[i] <= 79)
            {
                points += 2.7 * stan[i];
                continue;
            }    
            if(score[i] >= 73 && score[i] <= 75)
            {
                points += 2.3 * stan[i];
                continue;
            }
            if(score[i] >= 70 && score[i] <= 72)
            {
                points += 2.0 * stan[i];
                continue;
            }
            if(score[i] >= 66 && score[i] <= 69)
            {
                points += 1.7 * stan[i];
                continue;
            }
            if(score[i] >= 63 && score[i] <= 65)
            {
                points += 1.3 * stan[i];
                continue;
            }
            if(score[i] >= 60 && score[i] <= 62)
            {
                points += 1.0 * stan[i];
                continue;
            }
        }
            return points;
    }
    int main()
    {
        int n,m;
        cin>>n>>m;
        int val[15];
        for(int i = 0;i < m;i++)
        {
            cin>>val[i];
        }
        info all[1005];
        for(int j = 0;j < n;j++)
        {
            cin>>all[j].sno;
            for(int y = 0;y < m;y++)
            {
                cin>>all[j].score[y];
            }
        }
        //输入完毕
        int full = 0;
        for(int i = 0;i < m;i++)
        {
            full += val[i]; 
        }
        for(int y = 0;y < n;y++)
        {
            all[y].gpa = Calpoints(val,m,all[y].score);
        }
        int rank[1005] = {0};    //别他妈瞎起名字，这个数据结构开始写的int错了
        for(int k = 0;k < n;k++)
        {
            rank[k] = int(all[k].gpa / full * 10 + 0.5);
        }
        for(int o = 0;o < n - 1;o++)
        {
            for(int b = 0;b < n - 1 - o;b++)
            {
                int temp;
                if(rank[b] < rank[b + 1])
                {
                    temp = rank[b];
                    rank[b] = rank[b + 1];
                    rank[b + 1] = temp;
                }
            }
        }
        for(int i = 0;i < n;i++)
        {
            int counter = 1;
            for(int j = 0;j < n;j++)
            {
                if(rank[j] >int(all[i].gpa / full * 10 + 0.5))
                {
                    counter++;
                }else
                {
                    all[i].rank = counter;
                    break;
                }

            }
            cout<<all[i].sno<<" "<<fixed<<setprecision(1)<<all[i].gpa<<" ";
            cout<<all[i].rank<<endl;
        }
        return 0;
    }