#define kAlertSentAway 0
#define kAlertTakeAction 1

#import <UIKit/UIKit.h>
#import "MNAlertData.h"


@class MNAlertViewController;

@protocol MNAlertViewControllerDelegate
-(void)alertViewController:(MNAlertViewController *)viewController hadActionTaken:(int)action;
@end
@interface MNAlertViewController : UIViewController
{
	UILabel *alertHeader;
	UILabel *alertText;
	UIButton *sendAway;
	UIImageView *alertBackground;

	MNAlertData *dataObj;

	id<MNAlertViewControllerDelegate> _delegate;
}

-(void)initWithData:(MNAlertData*) data;
-(void)sendAway:(id)sender;
-(void)takeAction:(id)sender;

@property(nonatomic, retain) MNAlertData *dataObj;

@property(nonatomic, retain) UILabel *alertHeader;
@property(nonatomic, retain) UILabel *alertText;
@property(nonatomic, retain) UIButton *sendAway;
@property(nonatomic, retain) UIImageView *alertBackground;

@property(readwrite, retain) id<MNAlertViewControllerDelegate> _delegate;

@end
