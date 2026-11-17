# Use the official Node.js image as the base image
FROM node:20

# Set the working directory inside the container
WORKDIR /app

# Copy package.json and package-lock.json first
# This improves build performance by using Docker cache
COPY package*.json ./

# Install all project dependencies
RUN npm install

# Copy the remaining application source code
COPY . .

# Inform Docker that the application listens on port 3000
EXPOSE 3000

# Command to start the application
CMD ["npm", "start"]