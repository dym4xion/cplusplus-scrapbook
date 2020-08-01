static int sum = 0, count = 0;

int running_avg(int i){
    sum += i;
    count++;
    return sum / count;
}

void reset () {
    sum = 0;
    count = 0;
}
