#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 100;
//节点组成了一棵基环树，可以用树上dp+环上dp来做
int n, fa[MAXN], nxt[MAXN], f[MAXN][2];//f[i][0]：当i是民，子树i最多的狼的数量，f[i][1]：当i是狼，子树i最多的狼的数量
bool vis[MAXN], done[MAXN], isroot[MAXN];
vector<int> g[MAXN];
int s[MAXN][2], h[MAXN][2], h2[MAXN][2], ans;//h[i][2]表示前i个，其中最后一个是民/狼，最多有多少狼，h2表示1必须不能是狼

void dfs(int cur)
{
    if (done[fa[cur]]) {
        return;
    }
    if (vis[fa[cur]]) {
        int p = fa[cur];
        while (!isroot[p]) {
            isroot[p] = true;
            p = fa[p];
        }
        return;
    }
    vis[cur] = true;
    dfs(fa[cur]);
    done[cur] = true;
}

void dfs2(int cur)
{
    vis[cur] = true;
    for (int i = 0, sz = g[cur].size(); i < sz; i++) {
        int tar = g[cur][i];
        if (isroot[tar] || vis[tar]) {
            continue;
        }
        dfs2(tar);
        f[cur][0] += max(f[tar][0], f[tar][1]);
        f[cur][1] += f[tar][0];
    }
    f[cur][1]++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> fa[i];
        g[fa[i]].push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++) {
        if (isroot[i]) {
            dfs2(i);
        }
    }
    memset(vis, false, sizeof(vis));
    for (int i = 1; i <= n; i++) {
        if (isroot[i] && !vis[i]) {
            int p = i, cnt = 0;
            while (!vis[p]) {
                vis[p] = true;
                s[++cnt][0] = f[p][0];
                s[cnt][1] = f[p][1];
                p = fa[p];
            }
            if (cnt == 1) {
                ans += max(s[1][0], s[1][1]);
                continue;
            }
            h[1][0] = s[1][0];
            h[1][1] = s[1][1];
            for (int j = 2; j <= cnt; j++) {
                h[j][0] = s[j][0] + max(h[j - 1][0], h[j - 1][1]);
                h[j][1] = s[j][1] + h[j - 1][0];
            }
            int cur = max(h[cnt - 1][0], h[cnt - 1][1]) + s[cnt][0];
            h2[1][0] = s[1][0];
            for (int j = 2; j <= cnt; j++) {
                h2[j][0] = s[j][0] + max(h2[j - 1][0], h2[j - 1][1]);
                h2[j][1] = s[j][1] + h2[j - 1][0];
            }
            cur = max(cur, h2[cnt - 1][0] + s[cnt][1]);
            ans += cur;
        }
    }
    cout << ans;

    return 0;
}
