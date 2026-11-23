//
#ifndef T1GeoConfigurationChangeListener_h
#define T1GeoConfigurationChangeListener_h
@import Foundation;

@class NSObject;

@interface T1GeoConfigurationChangeListener : NSObject

@property (nonatomic) _Bool started;

/* class methods */
+ (id)defaultListener;

/* instance methods */
- (id)init;
- (void)start;
- (void)_startUpdates;
- (_Bool)hasStarted;

@end

#endif /* T1GeoConfigurationChangeListener_h */
