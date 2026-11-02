#import <Foundation/NSObject.h>
#import <stdint.h>

typedef struct {
    const void *bytes;
    uint64_t length;
} ELMStringView;

@interface ELMPropertiesResolver : NSObject
- (void)resolveProperties:(const void *)properties
      propertiesExtension:(int)propertiesExtension
            owningElement:(id)owningElement
          serializedValue:(ELMStringView)serializedValue
               controller:(id)controller
                  context:(id)context;
- (void)resolveStyleProperties:(const void *)styleProperties
                     extension:(int)extension
                    controller:(id)controller
                       context:(id)context;
@end