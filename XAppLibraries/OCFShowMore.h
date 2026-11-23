//
#ifndef OCFShowMore_h
#define OCFShowMore_h
@import Foundation;

@class NSObject, NSString;

@interface OCFShowMore : NSObject

@property (readonly, nonatomic) unsigned long long initialToShow;
@property (readonly, nonatomic) unsigned long long extraToShow;
@property (readonly, nonatomic) NSString *text;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithInitialToShow:(unsigned long long)show extraToShow:(unsigned long long)show text:(id)text;

@end

#endif /* OCFShowMore_h */
