//
//  AppDelegate.h
//  HWMonitor
//
//  Created by kozlek on 22.06.12.
//  Copyright (c) 2012 Natan Zalkin <natan.zalkin@me.com>. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "BundleUserDefaults.h"
#import "HWMonitorEngine.h"
#import "HWMonitorSensorsList.h"
#import "HWMonitorGraphsView.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    BundleUserDefaults *_defaults;
    NSMutableDictionary *_icons;
    NSMutableArray *_favorites;
    NSMutableDictionary *_sensors;
    NSMutableArray *_globalColors;
    NSUInteger _globalColorIndex;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSMenu *menu;
@property (assign) IBOutlet HWMonitorSensorsList *prefsController;
@property (assign) IBOutlet NSArrayController *graphsController;
@property (assign) IBOutlet NSTextField *versionLabel;
@property (assign) IBOutlet NSButton *toggleMenuButton;

@property (assign) IBOutlet HWMonitorGraphsView *temperatureGraph;
@property (assign) IBOutlet HWMonitorGraphsView *frequencyGraph;
@property (assign) IBOutlet HWMonitorGraphsView *tachometerGraph;
@property (assign) IBOutlet HWMonitorGraphsView *voltageGraph;

@property (readwrite, assign) IBOutlet NSObject *userInterfaceEnabled;

- (void)recieveItems:(NSNotification*)aNotification;
- (void)valuesChanged:(NSNotification*)aNotification;

- (IBAction)toggleMenu:(id)sender;

- (IBAction)favoritesChanged:(id)sender;
- (IBAction)useFahrenheitChanged:(id)sender;
- (IBAction)useBigFontChanged:(id)sender;
- (IBAction)useShadowEffectChanged:(id)sender;
- (IBAction)showBSDNamesChanged:(id)sender;

- (IBAction)graphsTableViewClicked:(id)sender;

@end
