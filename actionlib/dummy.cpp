#include "actionlib/client/action_client.h"
#include <actionlib/TestAction.h>

void dummy()
{
	actionlib::ActionClient<actionlib::TestAction>* test_client = new actionlib::ActionClient<actionlib::TestAction>("test_action");

	actionlib::ClientGoalHandle<actionlib::TestAction> gh = test_client->sendGoal(actionlib::TestGoal());

	ros::Duration(.1).sleep();

	printf("Destroying ActionClient\n");
	delete test_client;
	printf("Done Destroying ActionClient\n");
}
