    #include <stdio.h>
    int n;
    int pipes[9999][9999];
    int queue[9999];
    int traversed[9999];
    int front = -1;
    int rear = -1;
    #define source 0    
    #define sink (n+1)
    #define INT_MAX (1 << 29) 
    void enque(int value)
    {
    	if (rear == -1) {
    		front = rear = 0;
    		queue[rear] = value;
    		return;
    	}
    	rear++;
    	queue[rear] = value;
    }  
    int deque()
    {
    	int maximum_flow1 = queue[front];
    	front++;
    	return maximum_flow1;
    } 
    int check_full()
    {
    	if (rear >= n)
    		return 1;
    	else
    		return 0;
    }
    int check_empty()
    {
    	if (rear == -1 || front > rear)
    		return 1;
    	return 0;
    }
    int root_parent[9999];
    void print(int n)
    {
        int i,j;
        int a[n][n];
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                printf("%d",a[i][j]);
            }
        }
    } 
    int bfs()
    {
    	int i;
    	front = rear = -1;
    	for (i=0; i < n+2; i++) {
    		traversed[i] = 0;
    		root_parent[i] = 0;
    	}
    	root_parent[0] = -1;
    	enque(source);
    	traversed[source] = 1;
    	while(!check_empty()) {
    		int v = deque();
    		for (i = 0; i < n+2; i++) {
    			if (pipes[v][i] && !traversed[i]) {
    				traversed[i] = 1;
    				enque(i);
    				root_parent[i] = v;
    				if (i == sink)
    					return 1;
    			}
    		}	
     
    	}
    	return 0;
    }
    int maximum_flow;
    int max_flow()
    {
    	int i = sink;
    	int min = INT_MAX;
    	while(bfs()) {
    		i = sink;
    		min = INT_MAX;
    		while(i != -1) {
    			int v = root_parent[i];
    			if(v == -1)
    				break;
    			if (pipes[v][i] < min)
    				min = pipes[v][i];
    			i = v;
    		}
    		maximum_flow += min;
    		i = sink;
    		while(i != -1) {
    			int v = root_parent[i];
    			if(v == -1)
    				break;
     
    			if (pipes[v][i]) {
    				pipes[v][i] -= min;
    				pipes[i][v] += min;
     
    			}
    			i = v;
    		}
    	}	
    }
    int main()
    {
    	int i,j;
        printf("Enter the no of vertices excluding source and sink : ");
        scanf("%d",&n);
    	maximum_flow = 0;
    	front = rear = -1;
        for(i=1;i<n;i++)
        {
        for(j=i+1;j<n+1;j++)
        {
            if(j-i<=3)
            {
                pipes[i][j]=i+j;
            }
        }
        }
        for(i=1;i<=n/4;++i)
        {
        pipes[0][i]=i;
        }
        for(i=3*n/4;i<=n;++i)
        {
        pipes[i][n+1]=999999;
        }
        //printf("%d",sink);
        /*for(i=0;i<n+2;++i)
        {
            for(j=0;j<n+2;++j)
            {
                printf("%d ",pipes[i][j]);
            }
            printf("\n");
        }*/
    	max_flow();
    	printf ("Maximum flow is : %d\n", maximum_flow);
    	return 0;
    }


