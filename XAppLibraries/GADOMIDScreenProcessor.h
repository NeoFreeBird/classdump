//
#ifndef GADOMIDScreenProcessor_h
#define GADOMIDScreenProcessor_h
@import Foundation;

@class NSObject;

@interface GADOMIDScreenProcessor : NSObject

@property (nonatomic) unsigned long long outputDeviceStatus;

/* instance methods */
- (id)init;
- (id)stateForContainer:(id)container;
- (id)windowsForContainer:(id)container;
- (_Bool)isInternalWindow:(id)window;
- (void)updateOutputDeviceStatus;

@end

#endif /* GADOMIDScreenProcessor_h */
