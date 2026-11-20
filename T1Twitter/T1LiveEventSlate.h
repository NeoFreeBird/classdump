//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventSlate_h
#define T1LiveEventSlate_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, TFNTwitterStatus, TFSTwitterEntityImageInfo, TFSTwitterEntityMedia, TFSTwitterLiveEventAttribution, TFSTwitterRects;

@interface T1LiveEventSlate : NSObject <NSCopying>

@property (readonly, nonatomic) TFSTwitterRects *focusRectsToUseWhenCropping;
@property (readonly, copy, nonatomic) NSString *slateID;
@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *badge;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *imageInfo;
@property (readonly, nonatomic) TFSTwitterRects *focusRects;
@property (readonly, nonatomic) TFSTwitterEntityMedia *statusEntityMedia;
@property (readonly, nonatomic) TFSTwitterLiveEventAttribution *attribution;

/* instance methods */
- (id)init;
- (id)initWithSlateID:(id)id status:(id)status title:(id)title subtitle:(id)subtitle badge:(id)badge imageInfo:(id)info focusRects:(id)rects attribution:(id)attribution;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToSlate:(id)slate;

@end

#endif /* T1LiveEventSlate_h */
