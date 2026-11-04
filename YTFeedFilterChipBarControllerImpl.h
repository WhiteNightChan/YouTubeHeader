#import <Foundation/NSObject.h>

@interface YTFeedFilterChipBarControllerImpl : NSObject
- (void)updateWithCollectionViewController:(id)collectionViewController
                     feedFilterChipBarHost:(id)feedFilterChipBarHost
                 feedFilterChipBarRenderer:(id)feedFilterChipBarRenderer
                          browseIdentifier:(id)browseIdentifier
                               sectionList:(id)sectionList;
@end
