/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class NSArray;

@interface IDSDestinationComposite : IDSDestination {

	NSArray* _destinations;

}

@property (nonatomic,readonly) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)destinationURIs;
-(id)initWithDestinations:(id)arg1 ;
-(id)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)destinations;
@end
