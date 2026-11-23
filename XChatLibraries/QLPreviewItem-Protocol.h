//
#ifndef QLPreviewItem_Protocol_h
#define QLPreviewItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol QLPreviewItem <NSObject>

@required

@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

@optional

@end

#endif /* QLPreviewItem_Protocol_h */
