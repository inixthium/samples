/*
 * Copyright (c) 2011 Yeecco Limited
 */

#import <UIKit/UIKit.h>

@class EAGLView;

@interface AppDelegate : NSObject <UIApplicationDelegate>
{
        IBOutlet UIWindow     * window;
        IBOutlet EAGLView     * glView;
}

@property (nonatomic, retain) UIWindow    * window;

@end

