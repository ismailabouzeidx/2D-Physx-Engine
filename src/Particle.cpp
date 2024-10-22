#include "Particle.hpp"

void Particle::update(float delta_time){
    this->vel.x += this->accl.x * delta_time;
    this->vel.y += this->accl.y * delta_time;
    
    this->pos.x += this->vel.x * delta_time;
    this->pos.y += this->vel.y * delta_time;
    
    this->accl.x = 0;
    this->accl.y = 0;
}

void Particle::apply_force(const Vector2& force){
    // Newton's 2nd Law
    this->accl.x += force.x / this->mass;
    this->accl.y += force.y / this->mass;
}

Vector2 Particle::get_position() const { return this->pos; }

void Particle::set_position(const Vector2& position) { this->pos = position; }

int Particle::get_id() const { return this->id; }

float Particle::get_mass() const { return this->mass; }