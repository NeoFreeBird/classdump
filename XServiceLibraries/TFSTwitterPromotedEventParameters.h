//
#ifndef TFSTwitterPromotedEventParameters_h
#define TFSTwitterPromotedEventParameters_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSString;

@interface TFSTwitterPromotedEventParameters : NSObject {
    /* instance variables */
    NSMutableDictionary *_jsonDictionary;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *impressionID;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) long long eventTag;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier impressionID:(id)id event:(long long)event eventTag:(long long)tag isEarned:(_Bool)earned extraParameters:(id)parameters;
- (id)initWithImpressionID:(id)id event:(long long)event isEarned:(_Bool)earned extraParameters:(id)parameters;
- (id)JSONDictionary;
- (void)_tfn_setObject:(id)object forKey:(id)key;
- (id)_tfn_eventTagStringForEventTag:(long long)tag;

@end

#endif /* TFSTwitterPromotedEventParameters_h */
