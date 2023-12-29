// Import Swiper React components
import { Swiper, SwiperSlide } from "swiper/react"

// Import Swiper styles
import "swiper/css"
import "swiper/css/autoplay"

import { Card, CardContent, CardMedia, Typography } from "@mui/material"
import { Link } from "react-router-dom"

interface Book {
  title: string
  author: string
  imageUrl: string
  link: string
}

const BookSlider = ({ booksInfo, cardColor }: { booksInfo: Book[]; cardColor: string }) => {
  const swiperBreakpoint = {
    0: {
      slidesPerView: 1,
    },
    600: {
      slidesPerView: 2,
    },
    900: {
      slidesPerView: 4,
    },
    1200: {
      slidesPerView: 6,
    },
    1536: {
      slidesPerView: 7,
    },
  }

  return (
    <Swiper breakpoints={swiperBreakpoint}>
      {booksInfo.map((book) => (
        <SwiperSlide key={book.link}>
          <Link to={book.link}>
            <Card
              elevation={0}
              sx={{
                maxWidth: 200,
                backgroundColor: cardColor,
                padding: 1,
              }}
            >
              <CardMedia component="img" image={book.imageUrl} alt={book.title} />
              <CardContent>
                <Typography variant="h5" fontFamily="var(--body-font-bookflix)" fontWeight="500">
                  {book.title}
                </Typography>
                <Typography variant="subtitle1" fontFamily="var(--body-font-bookflix)">
                  {book.author}
                </Typography>
              </CardContent>
            </Card>
          </Link>
        </SwiperSlide>
      ))}
    </Swiper>
  )
}

export default BookSlider
