#include <stdio.h>

struct Team
{
    char name[15];
    int games,wins,losses,draws,goals,points;
};

struct game
{
    char team1[15],team2[15];
    int goals1,goals2;

};

void read_teams(struct team t[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%[^\n]",t[i].name);
        scanf("%d",&t[i].games);
        scanf("%d",&t[i].wins);
        scanf("%d",&t[i].losses);
        scanf("%d",&t[i].draws);
        scanf("%d",&t[i].goals);
        t[i].points = 2*t[i].wins + t[i].draws;
        getchar();
    }
}

void read_games(struct game g[],int m)
{
    for(int i=0;i<m;i++)
    {
        scanf("%[^\n]",g[i].team1);
        scanf("%d",&g[i].goals1);
        scanf("%[^\n]",g[i].team2);
        scanf("%d",&g[i].goals2);
        getchar();
    }
}


int main()
{
    int M,N;
    printf("Enter the no of teams: ");
    scanf("%d", &N);
    printf("Enter the no of games: ");
    scanf("%d", &M);
    struct team teams[N];
    read_teams(teams,N);
    struct game games[M];
    read_games(games,M)
    
    return 0;
}