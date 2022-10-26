#include <stdio.h>
typedef struct exercise
{
	const char *desc;
	float duration;
} exercise;
typedef struct meal
{
	const char *ingredients;
	float weight;
} meal;
typedef struct preferences
{
	meal food;
	exercise exercise;
} pref;
typedef struct fish 
{
	const char *name;
	const char *specie;
	int teeth;
	int age;
	pref care;
} fish;

void catalog(fish f)
{
	printf("%s is a %s with %i teeth. He is %i years old\n",
			f.name, f.specie, f.teeth, f.age);
}
void label(fish f)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", f.name, f.specie, f.age, f.teeth);
	printf("Feed with %.2f lbs of %s and allow to %s for %.2f hours\n", 
			f.care.food.weight, f.care.food.ingredients, 
			f.care.exercise.desc, f.care.exercise.duration);
}
int main()
{
	fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
	//catalog(snappy);
	label(snappy);
	//printf("Snappy likes to eat %s\n", snappy.care.food);
	//printf("Snappy likes to exercise for %.1f hours\n", snappy.care.exercise_hours);
	return (0);
}
