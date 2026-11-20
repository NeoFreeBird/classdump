//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRPlacePickerActionAdapter_h
#define TCRPlacePickerActionAdapter_h
@import Foundation;

@class NSString, TFNItemsDataViewAdapter;

@interface TCRPlacePickerActionAdapter : TFNItemsDataViewAdapter

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *actionText;

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TCRPlacePickerActionAdapter_h */
