//
#ifndef T1PeopleDiscoveryPivotParameters_h
#define T1PeopleDiscoveryPivotParameters_h
@import Foundation;

@class NSObject, TNLParameterCollection;

@interface T1PeopleDiscoveryPivotParameters : NSObject

@property (readonly, copy, nonatomic) TNLParameterCollection *parameterCollection;

/* instance methods */
- (id)initWithPivotURL:(id)url source:(long long)source;

@end

#endif /* T1PeopleDiscoveryPivotParameters_h */
