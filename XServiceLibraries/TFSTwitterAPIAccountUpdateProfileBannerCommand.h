//
#ifndef TFSTwitterAPIAccountUpdateProfileBannerCommand_h
#define TFSTwitterAPIAccountUpdateProfileBannerCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@class NSData, NSString;

@interface TFSTwitterAPIAccountUpdateProfileBannerCommand : TFSTwitterAPICommandWithExternalResponseProcessor

@property (readonly, nonatomic) NSData *bannerData;
@property (readonly, copy, nonatomic) NSString *bannerFileName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double leftOffset;
@property (readonly, nonatomic) double topOffset;
@property (readonly, copy, nonatomic) NSString *originalMediaHash;

/* instance methods */
- (id)initWithAccountID:(id)id bannerData:(id)data bannerFileName:(id)name size:(struct CGSize { double x0; double x1; })size leftOffset:(double)offset topOffset:(double)offset originalMediaHash:(id)hash context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIAccountUpdateProfileBannerCommand_h */
