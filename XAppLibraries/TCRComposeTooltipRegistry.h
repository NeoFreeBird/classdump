//
#ifndef TCRComposeTooltipRegistry_h
#define TCRComposeTooltipRegistry_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface TCRComposeTooltipRegistry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *events;

/* instance methods */
- (id)init;
- (id)itemsForEvent:(unsigned long long)event;
- (void)addConfiguration:(id)configuration forEvent:(unsigned long long)event fromIdentifier:(id)identifier;

@end

#endif /* TCRComposeTooltipRegistry_h */
