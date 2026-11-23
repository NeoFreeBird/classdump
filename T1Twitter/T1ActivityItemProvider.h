//
#ifndef T1ActivityItemProvider_h
#define T1ActivityItemProvider_h
@import Foundation;

#include "TTACoreShareable-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterEntityURL, TSShareLinkSession, UIActivityItemProvider, UIImage;

@interface T1ActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) TFNTwitterStatus *status;
@property (retain, nonatomic) id <TTACoreShareable> shareableItem;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSURL *imageDataFileURL;
@property (copy, nonatomic) TFSTwitterEntityURL *entityURL;
@property (nonatomic) long long activityItemType;
@property (readonly, nonatomic) NSMutableDictionary *shareLinkURLsByActivityType;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (copy, nonatomic) NSString *linkBackSubject;
@property (copy, nonatomic) NSArray *linkBackSubjectActivityTypes;
@property (retain, nonatomic) TSShareLinkSession *shareLinkSession;

/* class methods */
+ (id)providerWithAccount:(id)account shareableItem:(id)item entityURL:(id)url image:(id)image type:(long long)type;
+ (id)providerWithAccount:(id)account shareableItem:(id)item entityURL:(id)url image:(id)image imageData:(id)data type:(long long)type;

/* instance methods */
- (id)initWithPlaceholderItem:(id)item;
- (id)initWithAccount:(id)account status:(id)status entityURL:(id)url image:(id)image type:(long long)type;
- (void)dealloc;
- (id)item;
- (void)logShareLinkShareForActivityType:(id)type;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (_Bool)_tfn_sharesStatusLinkForActivityType:(id)type;
- (_Bool)_tfn_linkIsStatus;
- (_Bool)_tfn_awaitsShareLinkForActivityType:(id)type;
- (id)_tfn_itemForSelectedActivityType:(id)type;
- (id)activityViewController:(id)controller subjectForActivityType:(id)type;
- (id)activityViewController:(id)controller thumbnailImageForActivityType:(id)type suggestedSize:(struct CGSize { double x0; double x1; })size;
- (id)activityViewControllerLinkMetadata:(id)metadata;
- (id)_tfn_statusURLForActivityType:(id)type;
- (id)_tfn_statusURLForActivityType:(id)type sParam:(unsigned long long)param fallback:(id)fallback;
- (id)_tfn_statusURLStringForActivityType:(id)type sParam:(unsigned long long)param fallback:(id)fallback;
- (id)_tfn_statusEmailBody;
- (id)_tfn_imageItem;
- (id)_tfn_imageDataFileURL;
- (id)_tfn_imageDataFileExtension;
- (id)_tfn_itemURLString;
- (id)_tfn_itemEntityURL;
- (id)_tfn_createItemForMail;
- (id)_tfn_wrapEmailBodyInTags:(id)tags;
- (long long)_tfn_activityItemTypeForActivity:(id)activity;
- (id)_tfn_itemForActivityType:(id)type textFormatForMessages:(id)messages;
- (id)_tfn_prepareURL:(id)url activityType:(id)type;

@end

#endif /* T1ActivityItemProvider_h */
