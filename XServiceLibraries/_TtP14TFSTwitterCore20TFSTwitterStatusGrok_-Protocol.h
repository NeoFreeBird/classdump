//
#ifndef _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h
#define _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterGrokAnnotation.h"
#include "TFSTwitterGrokTranslation.h"

@class NSArray;

@protocol TFSTwitterCore.TFSTwitterStatusGrok <NSObject>

@required

@property (nonatomic, readonly) NSArray *grokAnalysisFollowups;
@property (nonatomic, readonly) _Bool grokAnalysisButton;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (nonatomic, readonly) TFSTwitterGrokAnnotation *grokAnnotations;

@optional

@end

#endif /* _TtP14TFSTwitterCore20TFSTwitterStatusGrok__Protocol_h */
