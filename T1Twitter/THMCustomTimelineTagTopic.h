//
#ifndef THMCustomTimelineTagTopic_h
#define THMCustomTimelineTagTopic_h
@import Foundation;

@class NSObject, NSString;

@interface THMCustomTimelineTagTopic : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *specialEffects;
}

@property (nonatomic, readonly) NSString *tag;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *tabLabel;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *iconImageUrl;
@property (nonatomic, readonly) NSString *scribe;

/* instance methods */
- (id)init;

@end

#endif /* THMCustomTimelineTagTopic_h */
