# include <cstdio>
# include <iostream>
# include <stack>
# include <string>

using namespace std;
# define MAX 1000006
char str[MAX];
stack<char>s;

int main(void)
{
	int T; scanf("%d", &T);
	while (T--) {
		int n; scanf("%d", &n);
		if (n==0) {
			printf("0\n");
			continue;
		}
		scanf("%s", str);
		s.push(str[0]);
		for (int i = 1;i < n;i++) {
			if(s.empty()) {
				s.push(str[i]);
				continue;
			} else {
				if (s.top()=='(' && str[i]==')') {
					s.pop();
				} else {
					s.push(str[i]);
				}
			}
		}
		int ans = s.size();
		printf("%d\n", ans);
		while(!s.empty()) {
			s.pop();
		}
	}


	return 0;
}