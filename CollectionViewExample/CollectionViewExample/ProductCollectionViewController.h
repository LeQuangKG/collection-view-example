//
//  ProductCollectionViewController.h
//  CollectionViewExample
//
//  Created by Guido Marucci Blas on 8/10/14.
//  Copyright (c) 2014 Wolox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ProductCollectionViewModel;

@interface ProductCollectionViewController : UICollectionViewController

- (instancetype)initWithViewModel:(ProductCollectionViewModel *)viewModel;

@end
