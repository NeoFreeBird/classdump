//
#ifndef TFSTwitterCardDataAssimilatable_h
#define TFSTwitterCardDataAssimilatable_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface TFSTwitterCardDataAssimilatable : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 bindingValues;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSDate *updatedTimestamp;
@property (nonatomic, copy) NSString *audienceName;
@property (nonatomic, copy) NSString *audienceBucket;

/* instance methods */
- (id)initWithName:(id)name url:(id)url updatedTimestamp:(id)timestamp;
- (void)setString:(id)string scribeKey:(id)key forKey:(id)key;
- (void)setBoolean:(_Bool)boolean forKey:(id)key;
- (void)setUserID:(long long)id scribeKey:(id)key forKey:(id)key;
- (void)setImage:(id)image forKey:(id)key;
- (void)setInteger:(long long)integer forKey:(id)key;
- (void)setImageColor:(id)color forKey:(id)key;
- (void)assimilateIntoModelContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterCardDataAssimilatable_h */
