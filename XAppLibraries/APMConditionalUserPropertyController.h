//
#ifndef APMConditionalUserPropertyController_h
#define APMConditionalUserPropertyController_h
@import Foundation;

@class NSObject;

@interface APMConditionalUserPropertyController : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)processEventOnWorkerQueue:(id)queue;
- (_Bool)removeTimedOutCUPWithTimedOutEvents:(id *)events;
- (_Bool)removeExpiredCUPWithExpiredEvents:(id *)events;
- (id)updateConditionalUserPropertiesWithEventNameOnWorkerQueue:(id)queue;
- (void)setConditionalUserProperty:(id)property forName:(id)name;
- (void)clearConditionalUserPropertyWithClearEvent:(id)event forName:(id)name;
- (id)conditionalUserPropertiesWithNamePrefix:(id)prefix filterByOrigin:(id)origin;
- (void)setConditionalUserPropertyOnWorkerQueue:(id)queue;
- (void)removeConditionalUserPropertyOnWorkerQueue:(id)queue;

@end

#endif /* APMConditionalUserPropertyController_h */
