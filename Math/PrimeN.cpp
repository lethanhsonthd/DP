int prime[N];
int last[N];
int numOfPrime = 0;
void thanos() {
for(int i = 2; i < N; ++i) {
    if (last[i] == 0) {
        last[i] = i;
        prime[numOfPrime++] = i;
    }
    for(int j = 0; j < numOfPrime && prime[j] <= last[i] && prime[j] * i < N; ++j) {
    last[i * prime[j]] = prime[j];
        }
    }
}
