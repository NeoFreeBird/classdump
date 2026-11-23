//
#ifndef OIDFieldMapping_h
#define OIDFieldMapping_h
@import Foundation;

@class NSObject, NSString;

@interface OIDFieldMapping : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) Class expectedType;
@property (readonly, nonatomic) id /* block */ conversion;

/* class methods */
+ (id)remainingParametersWithMap:(id)map parameters:(id)parameters instance:(id)instance;
+ (void)encodeWithCoder:(id)coder map:(id)map instance:(id)instance;
+ (void)decodeWithCoder:(id)coder map:(id)map instance:(id)instance;
+ (id)JSONTypes;
+ (id /* block */)URLConversion;
+ (id /* block */)dateSinceNowConversion;
+ (id /* block */)dateEpochConversion;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name type:(Class)type;
- (id)initWithName:(id)name type:(Class)type conversion:(id /* block */)conversion;

@end

#endif /* OIDFieldMapping_h */
