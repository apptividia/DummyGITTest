//
//  DummyGITTestAppDelegate.h
//  DummyGITTest
//
//  Created by Ukrit Visitkitjakarn on 9/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DummyGITTestViewController;

@interface DummyGITTestAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DummyGITTestViewController *viewController;

@end
