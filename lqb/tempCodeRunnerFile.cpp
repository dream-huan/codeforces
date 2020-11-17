dx][dy]=1;
                sum++;
                q.push(make_pair(make_pair(dx,dy),q.front().second+1));
            }
        }
    }