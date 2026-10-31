#import "GIMMe.h"

@interface YTSettingsSectionItemManager : NSObject
@property (nonatomic, readwrite, weak) GIMMe *gimme;
- (id)parentResponder;
- (void)updateSectionForCategory:(NSUInteger)category
                       withEntry:(id)entry;
@end
