//
//  MBSpacialChildViewController.h
//  TwoTask
//
//  Created by M B. Bitar on 12/18/12.
//  Copyright (c) 2012 progenius, inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBMapUI.h"
#import "MBPanGestureRecognizer.h"

@class MBSpacialMasterViewController, MBMapNode, MBPanGestureRecognizer, MBMultiLabelController;
@interface MBSpacialChildViewController : UIViewController <MBPanGestureRecognizerDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) MBSpacialChildViewController *leftViewController;
@property (nonatomic, strong) MBSpacialChildViewController *rightViewController;
@property (nonatomic, strong) MBSpacialChildViewController *upperViewController;
@property (nonatomic, strong) MBSpacialChildViewController *lowerViewController;

// for map
@property (nonatomic, assign) BOOL hasLeftViewController;
@property (nonatomic, assign) BOOL hasRightViewController;
@property (nonatomic, assign) BOOL hasLowerViewController;
@property (nonatomic, assign) BOOL hasUpperViewController;

@property (nonatomic, strong, readonly) MBPanGestureRecognizer *panGesture;
// a modal is deallocated and removed once the presenting view controller reappears.
@property (nonatomic, assign) BOOL isModal;
@property (nonatomic, weak) MBSpacialChildViewController *modalPresentingViewController;

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) MBMultiLabelController *multiLabelController;

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

// the minimum number of pixels required to be visible for this controller to snap in to view. default is 50
@property (nonatomic, assign) CGFloat snappingThreshold;
@property (nonatomic, weak) MBSpacialMasterViewController *masterController;
-(void)goToRootWithAnimation:(BOOL)animated;
-(void)moveInDirection:(MBDirection)direction animated:(BOOL)animated;
-(void)registerScrollView:(UIScrollView*)scrollView;
-(void)setTableViewOrigin:(CGPoint)origin;
-(MBSpacialChildViewController*)viewControllerInDirection:(MBDirection)direction;

-(void)spacialViewDidLoad;
-(void)spacialViewWillAppear;
-(void)spacialViewDidAppear;
-(void)spacialViewWillDisappear;
-(void)spacialViewDidDisappear;
@end
