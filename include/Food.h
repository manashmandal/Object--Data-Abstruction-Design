#ifndef FOOD_H
#define FOOD_H



class Food
{
    public:
        virtual double percentProtein() const = 0;
        virtual double percentFat() const = 0;
        virtual double percentCarbohydrates() const = 0;

        double getCalories() const
        {
            return calories;
        }

        void setCalories(double cal)
        {
            calories = cal;
        }
    protected:
    private:
        double calories;
};

#endif // FOOD_H
