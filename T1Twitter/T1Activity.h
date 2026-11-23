//
#ifndef T1Activity_h
#define T1Activity_h
@import Foundation;

#include "T1ActivityModel-Protocol.h"
#include "TSShareActionViewModel-Protocol.h"

@class NSString, UIActivity, UIImage;
@protocol T1ActivityDelegate;

@interface T1Activity : UIActivity <TSShareActionViewModel>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <T1ActivityModel> activityModel;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) _Bool isSupported;
@property (weak, nonatomic) id <T1ActivityDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *scribeAction;

/* class methods */
+ (long long)activityCategory;

/* instance methods */
- (id)actionTitle;
- (id)actionImage;
- (void)performAction;
- (id)activityTypeScribeIdentifier;
- (id)actionIdentifier;
- (id)initWithActivityModel:(id)model identifier:(id)identifier type:(unsigned long long)type title:(id)title imageName:(id)name;
- (id)initWithActivityModel:(id)model identifier:(id)identifier type:(unsigned long long)type title:(id)title image:(id)image;
- (id)activityTitle;
- (id)activityImage;
- (id)activityType;
- (_Bool)canPerformWithActivityItems:(id)items;
- (void)performActivity;
- (void)activityDidFinish:(_Bool)finish;

@end

#endif /* T1Activity_h */
