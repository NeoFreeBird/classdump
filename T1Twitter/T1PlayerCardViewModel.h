//
#ifndef T1PlayerCardViewModel_h
#define T1PlayerCardViewModel_h
@import Foundation;

#include "T1CardClassicCallToActionModel.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject, NSString, TFNTwitterCardContext;

@interface T1PlayerCardViewModel : NSObject

@property (copy, nonatomic) NSString *userFullName;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *callToActionText;
@property (copy, nonatomic) NSString *htmlURL;
@property (retain, nonatomic) T1CardClassicCallToActionModel *callToActionModel;
@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (readonly, copy, nonatomic) NSString *callToActionEventType;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> primaryUser;
@property (readonly, copy, nonatomic) NSString *playerImageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playerImageDimensions;
@property (readonly, nonatomic) _Bool supportsNativePlayback;
@property (readonly, nonatomic) _Bool isYouTubeCard;

/* instance methods */
- (id)init;
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (void)_primaryUserDidUpdate:(id)update;

@end

#endif /* T1PlayerCardViewModel_h */
