//
#ifndef OCFIcon_h
#define OCFIcon_h
@import Foundation;

@class NSObject, NSString;

@interface OCFIcon : NSObject

@property (readonly, nonatomic) NSString *horizonIcon;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithHorizonIcon:(id)icon;

@end

#endif /* OCFIcon_h */
