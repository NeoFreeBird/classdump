//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADDeviceOrientationSignals_h
#define GADDeviceOrientationSignals_h
@import Foundation;

#include "GADSignal-Protocol.h"

@class NSObject, NSString;

@interface GADDeviceOrientationSignals : NSObject <GADSignal> {
    /* instance variables */
    NSString *_supportedInterfaceOrientationsForKeyWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _standardizedMainScreenPortraitBounds;
}

@property (readonly, nonatomic) _Bool orientationLandscape;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } standardizedOrientedScreenBounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } standardizedOrientedWindowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)signalSource;

/* instance methods */
- (id)init;
- (id)initWithWindow:(id)window;
- (struct CGSize { double x0; double x1; })standardizedPortraitWindowSize;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADDeviceOrientationSignals_h */
