#include <stdio.h>
#include <string.h>

struct Team {
    char name[15];
    int games, wins, losses, draws, goals, points;
};

struct Game {
    char team1[15], team2[15];
    int goals1, goals2;
};

void read_teams(struct Team t[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s", t[i].name);
        scanf("%d", &t[i].games);
        scanf("%d", &t[i].wins);
        scanf("%d", &t[i].losses);
        scanf("%d", &t[i].draws);
        scanf("%d", &t[i].goals);
        t[i].points = 2 * t[i].wins + t[i].draws;
        getchar(); // Read the newline character
    }
}

void read_games(struct Game g[], int m) {
    for (int i = 0; i < m; i++) {
        printf("Team #games #wins #losses #draws #goals : \n");
        scanf("%s", g[i].team1);
        scanf("%d", &g[i].goals1);
        scanf("%s", g[i].team2);
        scanf("%d", &g[i].goals2);
        getchar(); // Read the newline character
    }
}

int searchTeam(struct Team t[], int n, const char teamName[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(t[i].name, teamName) == 0) {
            return i;  // Found the team, return its index
        }
    }
    return -1;  // Team not found
}


/*void update_points(int m,int n, struct Game g[],struct team t[])
{
    for(int i=0;i<m;i++)//iterating through games
    {
        for(int j=0;j<n;j++)//finding the team in Teams table
        {
            if(searchTeam(t[j].team,n,g[i]))
            {
                if(g[i].goals1>g[i].goals2)
                    m[j].wins++;
                else

            }
        }
    }
}
*/

void update_points(int m, int n, struct Game g[], struct Team t[]) {
    for (int i = 0; i < m; i++) {  // Iterating through games
        int team1Index = searchTeam(t, n, g[i].team1);  // Find index of team1
        int team2Index = searchTeam(t, n, g[i].team2);  // Find index of team2

        if (team1Index != -1 && team2Index != -1) {  // Check if both teams are found
            // Update points based on game results
            if (g[i].goals1 > g[i].goals2) {
                t[team1Index].wins++;
                t[team2Index].losses++;
                t[team1Index].points += 2;
            } else if (g[i].goals1 < g[i].goals2) {
                t[team2Index].wins++;
                t[team1Index].losses++;
                t[team2Index].points += 2;
            } else {
                t[team1Index].draws++;
                t[team2Index].draws++;
                t[team1Index].draws +=1;
            }
            t[team1Index].games++;
            t[team2Index].games++;
            t[team1Index].goals+=g[i].goals1;
            t[team2Index].goals+=g[i].goals2;

            
        }
    }
}

void print_teams(struct Team t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Team #games #wins #losses #draws #goals : \n");
        printf("%s\t", t[i].name);
        printf("%d\t", t[i].games);
        printf("%d\t", t[i].wins);
        printf("%d\t", t[i].losses);
        printf("%d\t", t[i].draws);
        printf("%d\t", t[i].goals);
        printf("\n");

    }
}


int main() 
{
    int M, N;
    printf("Enter the number of teams: ");
    scanf("%d", &N);
    printf("Enter the number of games: ");
    scanf("%d", &M);
    
    struct Team teams[N];
    read_teams(teams, N);
    
    struct Game games[M];
    read_games(games, M);
    
    update_points(M,N,games,teams);
    print_teams(teams,N);
    return 0;
}


/*
ABC 5 3 2 0 10
PQR 4 1 2 1 8
XYZ 3 3 0 0 6

ABC 3 PQR 2
PQR 4 XYZ 4
ABC 2 XYZ 3

*/  
