//
//  ShutEyeAppDelegate.h
//  ShutEye V0.2
//
//  Copyright (c) Douglas Barry 2014-2018
//  First version 20140825.
//  Last update 20180412.
//

#import <Cocoa/Cocoa.h>
#import "ShutEyeWindowController.h"

NSTimer *sleepCheckTimer;
ShutEyeWindowController* aboutWindow;

@interface ShutEyeAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (nonatomic) NSTimer* sleepCheckTimer;
@property (nonatomic) ShutEyeWindowController* aboutWindow;

@end
