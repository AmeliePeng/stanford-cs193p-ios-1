//
//  ImageSupplierGateway.h
//  SPoT
//
//  Created by Hugo Ferreira on 2013/11/12.
//  Copyright (c) 2013 Mindclick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TagEntity.h"

@protocol ImageSupplierDataSource <NSObject>

/** @return List of `TagEntity` objects. */
- (NSArray *)listTagsAvailable;

/**
 @param tagsToExclude List of objects defining the ignored tags, evaluated as strings.
 @return List of `TagEntity` objects.
 */
- (NSArray *)listTagsExcluding:(NSArray *)tagsToExclude;

/** @return List of `ImageEntity` objects. */
- (NSArray *)fetchMax:(NSUInteger)number imagesWithTag:(TagEntity *)tag;

/** @return List of `ImageEntity` objects. */
- (NSArray *)fetchMax:(NSUInteger)number imagesBeforeDate:(NSDate *)date;

@end

@interface ImageSupplierGateway : NSObject

+ (id <ImageSupplierDataSource>)defaultDataSource;

@end