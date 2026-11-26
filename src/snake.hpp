enum class dir
{
    up,
    down,
    left,
    right,
};

struct Snake
{
    int body{};
    dir direction{};
    int score{};

    void initSnake ();
};
