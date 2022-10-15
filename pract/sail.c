#include <stdio.h>
void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}
void go_south_west(int *lat, int *lon)
{
	*lat = *lat - 0;
	*lon = *lon - 2;
}
void go_north_east(int *lat, int *lon)
{
	*lat = *lat + 2;
	*lon = *lon + 2;
}
void go_north_west(int *lat, int *lon)
{
	*lat = *lat + 0;
	*lon = *lon - 2;
}

int latitude = 32;
int longitude = -64;

int main()
{	

	printf("Ahoy matey's!! let's go south-east!!\n");
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at [%d, %d]\n", latitude, longitude);

	printf("\nAhoy matey's!! let's go south-west!!\n");
	go_south_west(&latitude, &longitude);
	printf("Avast! Now at [%d, %d]\n", latitude, longitude);

	printf("\nAhoy matey's!! let's go north-east!!\n");
	go_north_east(&latitude, &longitude);
	printf("Avast! Now at [%d, %d]\n", latitude, longitude);

	printf("\nAhoy matey's!! let's go north-west!!\n");
	go_north_west(&latitude, &longitude);
	printf("Avast! Now at [%d, %d]\n", latitude, longitude);
	return (0);
}
