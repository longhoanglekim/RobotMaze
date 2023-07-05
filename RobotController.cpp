#include "logic/MazeLogic.h"

void controller(IRobot& robot);

int main()
{
    MazeLogic maze_logic = MazeLogic();
    maze_logic.start(controller);

    return 0;
}

/** start of RobotController */
/** Sử dụng đoạn mã: bỏ chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Uncomment
  * Sau khi sử dụng: chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Comment
  */
void controller(IRobot& robot)
{
    robot.advance(); // move the robot
}
/** end of RobotController */



/** start of DumbController */
/** Sử dụng đoạn mã: bỏ chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Uncomment
  * Sau khi sử dụng: chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Comment
  */
//void controller(IRobot& robot)
//{
//    int random_number;
//    int direction;
//
//    // Select a random number
//   random_number = rand() % 4;
//
//    // Convert this to a direction
//    if (random_number == 0)
//        direction = IRobot::LEFT;
//    else if (random_number == 1)
//        direction = IRobot::RIGHT;
//    else if (random_number == 2)
//        direction = IRobot::BEHIND;
//    else
//        direction = IRobot::AHEAD;
//
//    robot.face(direction);          // Face the robot in this direction
//
//    robot.advance();                // and move the robot
//}
/** end of DumbController */



/** start of BrokenController */
/** Sử dụng đoạn mã: bỏ chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Uncomment
  * Sau khi sử dụng: chú thích đoạn mã
  * Bôi đen đoạn mã -> Chọn Edit -> Chọn Comment
  */
//void controller(IRobot& robot)
//{
//    int random_number;
//    int direction;
//
//    direction = robot.look(IRobot::EAST);
//
//    do
//    {
//        // Select a random number
//        random_number = rand() % 4;
//
//        // Convert this to a direction
//        if (random_number == 0)
//            direction = IRobot::LEFT;
//        else if (random_number == 1)
//            direction = IRobot::RIGHT;
//        else if (random_number == 2)
//            direction = IRobot::BEHIND;
//        else
//            direction = IRobot::AHEAD;
//    } while (robot.look(IRobot::AHEAD) == IRobot::WALL);
//
//    robot.face(direction);          // Face the robot in this direction
//
//    robot.advance();                // and move the robot
//}
/** end of BrokenController */

