#include "ball.h"

void Ball::setup(ofVec2f _position, ofVec2f _velocity) {
    position = _position;
    velocity = _velocity;
}

void Ball::resetForce() {
    force.set(0, 0);
}

void Ball::addForce(ofVec2f _force) {
    force = _force;
}

void Ball::updateForce() {
    force -= velocity * friction;
}

void Ball::updatePos() {
    velocity += force;
    position += velocity;
}

void Ball::checkBounds(float xmin, float ymin, float xmax, float ymax) {
    if (position.x < xmin || position.x > xmax) {
        velocity.x *= -1;
    }
    if (position.y < ymin || position.y > ymax) {
        velocity.y *= -1;
    }
    
    if (position.x < xmin) {
        position.x = xmin + (xmin - position.x);
    }
    if (position.x > xmax) {
        position.x = xmax - (position.x - xmax);
    }
    if (position.y < ymin) {
        position.y = ymin + (ymin - position.y);
    }
    if (position.y > ymax) {
        position.y = ymax - (position.y - ymax);
    }
}

void Ball::draw() {
    ofSetHexColor(0x3399cc);
    ofCircle(position, 10);
}