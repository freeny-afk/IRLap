#pragma once
#include "Turn.h"
#include <iostream>
#include <string>

    Turn::Turn() : angle(0), length(0), side(2) {
    }  // standart constructors
    Turn::Turn(double a, double l) : angle(a), length(l) {
    }  // constructors with parameters

    void Turn::Set_Angl(double a) {
        angle = a; }  // set turn angle
    void Turn::Set_Angl() {
        std::cin >> angle; }  // set turn angle

    void Turn::Set_Len(double l) {
        length = l; }  // set turn length
    void Turn::Set_Len() {
        std::cin >> length; }  // set turn length

    void Turn::Set_Where(int sd) {
        side = sd; }
    void Turn::Set_Where() {
        std::cin >> side; }  // set turn length

    double Turn::Get_Angl() const {
        return angle; }  // return tern angle
    double Turn::Get_Len() const {
        return length; }  // return turn length
    int Turn::Get_Where() const{
        return side; } // return side of turn

    