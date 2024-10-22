#pragma once
#include <SDL2/SDL.h>

struct Vector2 {
    Vector2() : x(0.0f), y(0.0f){}
    Vector2(float x, float y) : x(x), y(y){}

    int x, y;
};

struct Vector3 {
    Vector3() : x(0.0f),y(0.0f), z(0.0f){}
    Vector3(float x, float y, float z) : x(x), y(y), z(z){}

    float x, y, z;
};

class Particle {
    public:
        virtual ~Particle() = default;

        virtual void update(float delta_time);

        virtual void render(SDL_Renderer* renderer) = 0;

        void apply_force(const Vector2& force);

        Vector2 get_position() const;
        void set_position(const Vector2& position);

        int get_id() const;
        float get_mass() const;
    
    private:
        int id;
        
        float mass;
        
        Vector2 pos;
        Vector2 vel;
        Vector2 accl;
};