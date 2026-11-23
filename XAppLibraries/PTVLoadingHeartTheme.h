//
#ifndef PTVLoadingHeartTheme_h
#define PTVLoadingHeartTheme_h
@import Foundation;

#include "PTVLoadingHeartThemeResponse.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject, NSString, UIImage;

@interface PTVLoadingHeartTheme : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    UIImage *_placeholderFill;
    UIImage *_placeholderBorder;
    PTVWorkClient *_workClient;
    PTVLoadingHeartThemeResponse *_dataResponse;
}

@property (retain, nonatomic) NSString *heartTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithHeartTheme:(id)theme;
- (id)fill;
- (id)border;
- (id /* block */)processor;
- (id /* block */)processorWithTraitCollection:(id)collection;

@end

#endif /* PTVLoadingHeartTheme_h */
